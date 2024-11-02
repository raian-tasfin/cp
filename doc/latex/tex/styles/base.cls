\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{base}[2021/03/27 LaTeX class for course notes]


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% inherit from book class %%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
\DeclareOption*{\PassOptionsToClass{\CurrentOption}{memoir}}
\ProcessOptions\relax
\LoadClass[a4paper,17pt,book]{memoir}


%%%%%%%%%%%%%%%%%%%%%%%%%
%% standalone packages %%
%%%%%%%%%%%%%%%%%%%%%%%%%
\RequirePackage{enumitem}
\RequirePackage{subcaption}
\RequirePackage{subfiles}


\AtBeginDocument{%
  \setlrmargins{*}{*}{1}
  \checkandfixthelayout
}
\endinput
% End of MyPackage.sty
