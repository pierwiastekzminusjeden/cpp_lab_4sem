#include <iostream>
#include "Page.h"

Page::Page(){
    m_header = "empty";
}
Page::~Page(){
}

void Page::AddHeader(const std::string header){
    m_header = header;
}

Page* Page::Copy() const{
    Page *toRet = new Page();
    toRet->m_header = m_header;
    toRet->m_textBuff = m_textBuff;
    return toRet;
    
}

void Page::AddText(const std::string text){
    m_textBuff = text + " \n";
}

void Page::Print() const{
    std::cout << "Page::"<<m_header <<std::endl;
    std::cout << "Page::"<<m_textBuff << std::endl;
}
