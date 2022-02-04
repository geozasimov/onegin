#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <cassert>

enum TypesErrors
{
    WRONG_INPUT_FILE = 1
};

struct String
{
    int len = 0;
    char* ptr = nullptr;
};

struct Text
{
    char* input_file_name = nullptr;
    char* output_file_name = nullptr;
    char* buffer = nullptr;
    size_t num_of_strings = 0;
    String *strings = nullptr;
};

void SayGreetings();

void SayGoodbye();

int GetFileNames (Text *text, int argc, char* argv[]);

int ReadFromFile (Text *text);

FILE* OpenFileWrite (Text* text);

size_t GetSizeOfFile (FILE* fp);

void WriteToFile (Text *text, FILE *fp);

void CloseFile (FILE *fp);

void MakeString (Text *text);

size_t DeleteSpaces (char *array);

void MemoryFree (Text *text);

void Sort (Text *text);

int CMP (const void *arg1, const void *arg2);