#include <iostream>
#include "Book.h"

Book::Book(const std::string name){
    for(int i = 0 ; i < 5 ; i++)
        m_pages[i] = new Page();
    
    m_author = "anonyn";
    m_title = "page";
    m_pages[0]->m_textBuff = "Title " + m_title;
    m_pageCount = 0;
    m_iter = 0;

}
Book::~Book(){
    for(int i = 0; i < 5 ; i++)
        delete m_pages[i];
}

void Book::AddPage(Page * page){
    m_pageCount++;
    m_pages[m_pageCount]->m_header = page->m_header;
    m_pages[m_pageCount]->m_textBuff = page->m_textBuff;

}

void Book::Print(){
    std::cout << "Book::autor " << m_author <<std::endl;
    for(int i = 0; i <= m_pageCount; i++){
        std::cout << "Page(" << i << ")::text " << m_pages[i]->m_textBuff 
            << "(header: " << m_pages[i]->m_header << ")" << std::endl;
    }
    std::cout << std:: endl;
}

void Book::Copy(const Book * toCopy){
    for(int i = 0; i <= toCopy->getNumberOfPages() ; i++){
        this->m_pages[i]->m_header = toCopy->m_pages[i]->m_header;
        this->m_pages[i]->m_textBuff = toCopy->m_pages[i]->m_textBuff;

    }
    m_author ="(copy) " +  toCopy->getAuthor();
    m_pageCount = toCopy->getNumberOfPages();
}

void Book::AddTitle(const std::string title){
    m_title = title;
    m_pages[0]->m_textBuff = "Title: " + m_title ;
    m_pageCount = 0;
}

void Book::AddHeader(const std::string newHeader){
    for(int i = 0; i < m_pageCount ; i++){
        m_pages[i]->m_header = newHeader;
    }
    
}

void Book::AddText(const std::string newText){
    for(int i = 1 ; i < m_pageCount ; i++ ){
        m_pages[i]->m_textBuff = newText;
    }
}

int Book::getNumberOfPages() const{
    return m_pageCount;
}

std::string Book::getAuthor() const{
    return m_author;
}

