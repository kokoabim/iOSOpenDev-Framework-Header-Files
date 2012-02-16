/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EPFormulaCleaner.h>
#import <OfficeImport/EDProcessor.h>

@class EDName, EDFormula, EDSheet, EDRowBlocks;

__attribute__((visibility("hidden")))
@interface EPFormulaCleaner : EDProcessor {
@private
	EDSheet *mCurrentSheet;	// 16 = 0x10
	EDFormula *mFormula;	// 20 = 0x14
	EDFormula *mTokensToClean;	// 24 = 0x18
	EDName *mParentName;	// 28 = 0x1c
	int mRowOffset;	// 32 = 0x20
	int mColumnOffset;	// 36 = 0x24
	EDRowBlocks *mBaseFormulaRowBlocks;	// 40 = 0x28
}
- (void)dealloc;	// 0xf76ed
- (bool)isObjectSupported:(id)supported;	// 0x10e781
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x10f73d
- (void)cleanFormula:(id)formula sheet:(id)sheet;	// 0x10f74d
- (void)cleanFormula:(id)formula name:(id)name;	// 0x269835
@end

@interface EPFormulaCleaner (Private)
- (void)cleanFormula:(id)formula sheet:(id)sheet name:(id)name;	// 0x10f771
- (bool)cleanTokenAtIndex:(unsigned)index removedTokenCount:(unsigned *)count;	// 0x10fa71
- (void)addOffsetsToRow:(int *)row rowRelative:(bool)relative column:(int *)column columnRelative:(bool)relative4;	// 0x10fe75
- (bool)isReferenceValidInLassoForRow:(int)row rowRelative:(bool)relative column:(int)column columnRelative:(bool)relative4;	// 0x10fe11
- (bool)isReferenceValidInLassoForSheet:(id)sheet rowMin:(int)min rowMinRelative:(bool)relative rowMax:(int)max rowMaxRelative:(bool)relative5 columnMin:(int)min6 columnMinRelative:(bool)relative7 columnMax:(int)max8 columnMaxRelative:(bool)relative9;	// 0x269c15
- (void)updateSheet:(id)sheet row:(int)row rowRelative:(bool)relative column:(int)column columnRelative:(bool)relative5;	// 0x10fea9
- (void)updateSheet:(id)sheet rowMin:(int)min rowMinRelative:(bool)relative rowMax:(int)max rowMaxRelative:(bool)relative5 columnMin:(int)min6 columnMinRelative:(bool)relative7 columnMax:(int)max8 columnMaxRelative:(bool)relative9;	// 0x269cd1
- (bool)cleanArray:(unsigned)array;	// 0x269855
- (bool)cleanRef:(unsigned)ref;	// 0x10fca1
- (bool)cleanArea:(unsigned)area;	// 0x1d7469
- (bool)cleanRef3D:(unsigned)d;	// 0x1d4361
- (bool)cleanArea3D:(unsigned)d;	// 0x1721b5
- (bool)cleanName:(unsigned)name;	// 0x20f6f5
- (bool)cleanNameX:(unsigned)x;	// 0x207275
- (bool)cleanFunc:(unsigned)func;	// 0x17fe55
- (bool)cleanFuncVar:(unsigned)var;	// 0x17fd01
- (bool)cleanUnion:(unsigned)aUnion;	// 0x1d4471
- (bool)cleanRange:(unsigned)range removedTokenCount:(unsigned *)count;	// 0x269871
- (bool)combineCellReferences:(unsigned)references removedTokenCount:(unsigned *)count;	// 0x269d61
- (bool)isLinkReferenceIndexSupported:(unsigned)supported allowExternal:(bool)external;	// 0x172365
- (id)worksheetFromLinkReferenceIndex:(unsigned)linkReferenceIndex loadIfNeeded:(bool)needed;	// 0x172579
- (bool)cleanName:(unsigned)name nameIndex:(unsigned)index sheetIndex:(unsigned)index3;	// 0x207409
- (bool)checkFunctionId:(int)anId tokenIndex:(unsigned)index;	// 0x17fd45
- (bool)checkSupportedAddInName:(id)name externalLink:(bool)link;	// 0x26982d
- (bool)checkCustomFunction:(unsigned)function;	// 0x2699c1
- (void)updateWorksheet:(id)worksheet row:(int)row column:(int)column inDictionary:(id)dictionary;	// 0x269ba1
- (void)applyMaxCellsInName:(id)name;	// 0x269831
- (bool)useEvaluationStackToCheckFunctionId:(int)checkFunctionId functionName:(id)name tokenIndex:(unsigned)index;	// 0x26a1e9
- (unsigned)useEvaluationStackToGetParameter:(unsigned)getParameter tokenIndex:(unsigned)index;	// 0x1d461d
- (id)useEvaluationStackToGetParameter:(unsigned)getParameter tokenIndex:(unsigned)index allReferencesAllowed:(bool)allowed success:(bool *)success;	// 0x26a839
- (id)extractFormulaToCleanFromSharedFormula:(id)sharedFormula;	// 0x1e8b09
- (void)reportWarning:(int)warning;	// 0x1b3b81
- (void)reportWarning:(int)warning parameter:(id)parameter;	// 0x1b3b95
- (void)reset;	// 0x10f99d
@end

@interface EPFormulaCleaner (EPInternal)
- (void)prepareToProcessFormula:(id)processFormula sheet:(id)sheet name:(id)name;	// 0x10f8b1
@end