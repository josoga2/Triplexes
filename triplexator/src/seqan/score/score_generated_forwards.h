// ==========================================================================
//                 SeqAn - The Library for Sequence Analysis
// ==========================================================================
// Copyright (c) 2006-2010, Knut Reinert, FU Berlin
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of Knut Reinert or the FU Berlin nor the names of
//       its contributors may be used to endorse or promote products derived
//       from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL KNUT REINERT OR THE FU BERLIN BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
//
// ==========================================================================


#ifndef SEQAN_HEADER_SCORE_GENERATED_FORWARDS_H 
#define SEQAN_HEADER_SCORE_GENERATED_FORWARDS_H 

//////////////////////////////////////////////////////////////////////////////
// NOTE: This file is automatically generated by build_forwards.py
//       Do not edit this file manually!
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////////////////////////////

namespace SEQAN_NAMESPACE_MAIN {

//____________________________________________________________________________
// Blosum30_

struct Blosum30_;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(65)

//____________________________________________________________________________
// Blosum45_

struct Blosum45_;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(133)

//____________________________________________________________________________
// Blosum62_

struct Blosum62_;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(200)

//____________________________________________________________________________
// Blosum80_

struct Blosum80_;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(267)

//____________________________________________________________________________
// Pam120_

struct Pam120_;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(404)

//____________________________________________________________________________
// Pam200_

struct Pam200_;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(473)

//____________________________________________________________________________
// Pam250_

struct Pam250_;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(542)

//____________________________________________________________________________
// Pam40_

struct Pam40_;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(334)

//____________________________________________________________________________
// Score

template <typename TValue , typename TSpec > class Score;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_base.h"(54)

//____________________________________________________________________________
// ScoreMatrix

template <typename TSequenceValue , typename TSpec > struct ScoreMatrix;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(52)

//____________________________________________________________________________
// ScoringMatrixData_

template <typename TValue, typename TSequenceValue, typename TSpec> struct ScoringMatrixData_;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(48)

//____________________________________________________________________________
// TagScoreMatrixFile_

struct TagScoreMatrixFile_;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(59)

//____________________________________________________________________________
// Vtml200_

struct Vtml200_;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(611)

} //namespace SEQAN_NAMESPACE_MAIN


//////////////////////////////////////////////////////////////////////////////
// TYPEDEFS
//////////////////////////////////////////////////////////////////////////////

namespace SEQAN_NAMESPACE_MAIN {

//____________________________________________________________________________
// Blosum30

typedef Score<int, ScoreMatrix<AminoAcid, Blosum30_> > Blosum30;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(77)

//____________________________________________________________________________
// Blosum45

typedef Score<int, ScoreMatrix<AminoAcid, Blosum45_> > Blosum45;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(145)

//____________________________________________________________________________
// Blosum62

typedef Score<int, ScoreMatrix<AminoAcid, Blosum62_> > Blosum62;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(212)

//____________________________________________________________________________
// Blosum80

typedef Score<int, ScoreMatrix<AminoAcid, Blosum80_> > Blosum80;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(279)

//____________________________________________________________________________
// EditDistanceScore

typedef Score<int, EditDistance> EditDistanceScore;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_edit.h"(75)

//____________________________________________________________________________
// Pam120

typedef Score<int, ScoreMatrix<AminoAcid, Pam120_> > Pam120;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(416)

//____________________________________________________________________________
// Pam200

typedef Score<int, ScoreMatrix<AminoAcid, Pam200_> > Pam200;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(485)

//____________________________________________________________________________
// Pam250

typedef Score<int, ScoreMatrix<AminoAcid, Pam250_> > Pam250;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(554)

//____________________________________________________________________________
// Pam40

typedef Score<int, ScoreMatrix<AminoAcid, Pam40_> > Pam40;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(346)

//____________________________________________________________________________
// ScoreMatrixFile

typedef Tag<TagScoreMatrixFile_> const ScoreMatrixFile;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(61)

//____________________________________________________________________________
// SimpleScore

typedef Score<int, Simple> SimpleScore;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_simple.h"(118)

//____________________________________________________________________________
// Vtml200

typedef Score<int, ScoreMatrix<AminoAcid, Vtml200_> > Vtml200;       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix_data.h"(623)

} //namespace SEQAN_NAMESPACE_MAIN


//////////////////////////////////////////////////////////////////////////////
// FUNCTIONS
//////////////////////////////////////////////////////////////////////////////

namespace SEQAN_NAMESPACE_MAIN {

//____________________________________________________________________________
// _sprintfValue

inline void _sprintfValue(char * buf, unsigned int val);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(447)
inline void _sprintfValue(char * buf, int val);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(459)
inline void _sprintfValue(char * buf, float val);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(471)
inline void _sprintfValue(char * buf, double val);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(484)

//____________________________________________________________________________
// _sscanfValue

inline void _sscanfValue(const char * buf, unsigned int & val);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(237)
inline void _sscanfValue(const char * buf, int & val);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(248)
inline void _sscanfValue(const char * buf, float & val);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(259)
inline void _sscanfValue(const char * buf, double & val);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(270)

//____________________________________________________________________________
// _writeScoringMatrix

template <typename TSequenceValue, typename TFile, typename TValue, typename TMeta> void _writeScoringMatrix(TFile & fl, TValue * tab, TMeta & meta);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(501)

//____________________________________________________________________________
// loadScoreMatrix

template <typename TValue, typename TSequenceValue, typename TSpec, typename TString> inline void loadScoreMatrix(Score<TValue, ScoreMatrix<TSequenceValue, TSpec> > & sc, TString & filename);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(405)
template <typename TValue, typename TSequenceValue, typename TSpec, typename TString, typename TMeta> inline void loadScoreMatrix(Score<TValue, ScoreMatrix<TSequenceValue, TSpec> > & sc, TString & filename, TMeta & meta);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(423)

//____________________________________________________________________________
// read

template <typename TFile, typename TValue, typename TSequenceValue, typename TSpec> void read(TFile & fl, Score<TValue, ScoreMatrix<TSequenceValue, TSpec> > & sc, ScoreMatrixFile);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(298)
template <typename TFile, typename TValue, typename TSequenceValue, typename TSpec> inline void read(TFile & fl, Score<TValue, ScoreMatrix<TSequenceValue, TSpec> > & sc);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(386)

//____________________________________________________________________________
// readMeta

template <typename TFile, typename TMeta> void readMeta(TFile & fl, TMeta & meta, ScoreMatrixFile);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(278)

//____________________________________________________________________________
// score

template <typename TValue, typename TSpec, typename TPos1, typename TPos2, typename TSeq1, typename TSeq2> inline TValue score(Score<TValue, TSpec> const & me, TPos1 pos1, TPos2 pos2, TSeq1 const &seq1, TSeq2 const &seq2);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_base.h"(204)
template <typename TValue, typename TSequenceValue, typename TSpec, typename TVal1, typename TVal2> inline TValue score(Score<TValue, ScoreMatrix<TSequenceValue, TSpec> > const & sc, TVal1 val1, TVal2 val2);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(152)
template <typename TValue, typename TSpec, typename TVal1, typename TVal2> inline TValue score(Score<TValue, TSpec> const & me, TVal1 left, TVal2 right);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_simple.h"(353)

//____________________________________________________________________________
// scoreGap

template <typename TValue, typename TSpec> inline TValue scoreGap(Score<TValue, TSpec> const & me);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_simple.h"(309)

//____________________________________________________________________________
// scoreGapExtend

template <typename TValue> inline TValue scoreGapExtend(Score<TValue, EditDistance> &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_edit.h"(111)
template <typename TValue> inline TValue scoreGapExtend(Score<TValue, EditDistance> const &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_edit.h"(119)
template <typename TValue, typename TSpec> inline TValue scoreGapExtend(Score<TValue, TSpec> const & me);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_simple.h"(220)

//____________________________________________________________________________
// scoreGapExtendHorizontal

template <typename TValue, typename TSpec, typename TPos1, typename TPos2, typename TSeq1, typename TSeq2> inline TValue scoreGapExtendHorizontal( Score<TValue, TSpec> const & me, TPos1, TPos2, TSeq1 const &, TSeq2 const &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_base.h"(118)

//____________________________________________________________________________
// scoreGapExtendVertical

template <typename TValue, typename TSpec, typename TPos1, typename TPos2, typename TSeq1, typename TSeq2> inline TValue scoreGapExtendVertical( Score<TValue, TSpec> const & me, TPos1, TPos2, TSeq1 const &, TSeq2 const &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_base.h"(138)

//____________________________________________________________________________
// scoreGapHorizontal

template <typename TValue, typename TSpec, typename TPos1, typename TPos2, typename TSeq1, typename TSeq2> inline TValue scoreGapHorizontal( Score<TValue, TSpec> const & me, TPos1, TPos2, TSeq1 const &, TSeq2 const &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_base.h"(158)

//____________________________________________________________________________
// scoreGapOpen

template <typename TValue> inline TValue scoreGapOpen(Score<TValue, EditDistance> &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_edit.h"(127)
template <typename TValue> inline TValue scoreGapOpen(Score<TValue, EditDistance> const &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_edit.h"(135)
template <typename TValue, typename TSpec> inline TValue scoreGapOpen(Score<TValue, TSpec> const & me);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_simple.h"(263)

//____________________________________________________________________________
// scoreGapOpenHorizontal

template <typename TValue, typename TSpec, typename TPos1, typename TPos2, typename TSeq1, typename TSeq2> inline TValue scoreGapOpenHorizontal( Score<TValue, TSpec> const & me, TPos1, TPos2, TSeq1 const &, TSeq2 const &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_base.h"(78)

//____________________________________________________________________________
// scoreGapOpenVertical

template <typename TValue, typename TSpec, typename TPos1, typename TPos2, typename TSeq1, typename TSeq2> inline TValue scoreGapOpenVertical( Score<TValue, TSpec> const & me, TPos1, TPos2, TSeq1 const &, TSeq2 const &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_base.h"(98)

//____________________________________________________________________________
// scoreGapVertical

template <typename TValue, typename TSpec, typename TPos1, typename TPos2, typename TSeq1, typename TSeq2> inline TValue scoreGapVertical( Score<TValue, TSpec> const & me, TPos1, TPos2, TSeq1 const &, TSeq2 const &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_base.h"(178)

//____________________________________________________________________________
// scoreMatch

template <typename TValue> inline TValue scoreMatch(Score<TValue, EditDistance> &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_edit.h"(79)
template <typename TValue> inline TValue scoreMatch(Score<TValue, EditDistance> const &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_edit.h"(87)
template <typename TValue, typename TSpec> inline TValue scoreMatch(Score<TValue, TSpec> const & me);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_simple.h"(136)

//____________________________________________________________________________
// scoreMismatch

template <typename TValue> inline TValue scoreMismatch(Score<TValue, EditDistance> &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_edit.h"(95)
template <typename TValue> inline TValue scoreMismatch(Score<TValue, EditDistance> const &);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_edit.h"(103)
template <typename TValue, typename TSpec> inline TValue scoreMismatch(Score<TValue, TSpec> const & me);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_simple.h"(177)

//____________________________________________________________________________
// setDefaultScoreMatrix

template <typename TValue, typename TSequenceValue, typename TSpec, typename TTag> inline void setDefaultScoreMatrix(Score<TValue, ScoreMatrix<TSequenceValue, TSpec> > & sc, TTag);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(201)
template <typename TValue, typename TSequenceValue, typename TSpec> inline void setDefaultScoreMatrix(Score<TValue, ScoreMatrix<TSequenceValue, TSpec> > & sc, Default);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(218)

//____________________________________________________________________________
// setScore

template <typename TValue, typename TSequenceValue, typename TSpec, typename TVal1, typename TVal2, typename T> inline void setScore(Score<TValue, ScoreMatrix<TSequenceValue, TSpec> > & sc, TVal1 val1, TVal2 val2, T score);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(176)

//____________________________________________________________________________
// setScoreGap

template <typename TValue, typename TSpec> inline void setScoreGap(Score<TValue, TSpec> & me, TValue const & value);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_simple.h"(330)

//____________________________________________________________________________
// setScoreGapExtend

template <typename TValue, typename TSpec> inline void setScoreGapExtend(Score<TValue, TSpec> & me, TValue const & value);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_simple.h"(241)

//____________________________________________________________________________
// setScoreGapOpen

template <typename TValue, typename TSpec> inline void setScoreGapOpen(Score<TValue, TSpec> & me, TValue const & value);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_simple.h"(284)

//____________________________________________________________________________
// setScoreMatch

template <typename TValue, typename TSpec> inline void setScoreMatch(Score<TValue, TSpec> & me, TValue const & value);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_simple.h"(156)

//____________________________________________________________________________
// setScoreMismatch

template <typename TValue, typename TSpec> inline void setScoreMismatch(Score<TValue, TSpec> & me, TValue const & value);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_simple.h"(198)

//____________________________________________________________________________
// write

template <typename TFile, typename TValue, typename TSequenceValue, typename TSpec, typename TMeta> inline void write(TFile & fl, Score<TValue, ScoreMatrix<TSequenceValue, TSpec> > const & sc, TMeta & meta);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(584)
template <typename TFile, typename TValue, typename TSequenceValue, typename TSpec> inline void write(TFile & fl, Score<TValue, ScoreMatrix<TSequenceValue, TSpec> > const & sc);       	// "/Users/fabianbuske/Documents/research/triplex/seqan/core/include/seqan/score/score_matrix.h"(601)

} //namespace SEQAN_NAMESPACE_MAIN

#endif

