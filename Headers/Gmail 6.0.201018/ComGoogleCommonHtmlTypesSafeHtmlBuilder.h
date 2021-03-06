//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonHtmlTypesSafeHtmlBuilder_AttributeContract, NSString;
@protocol JavaUtilList, JavaUtilMap;

@interface ComGoogleCommonHtmlTypesSafeHtmlBuilder : NSObject
{
    NSString *elementName_;
    id <JavaUtilMap> attributes_;
    id <JavaUtilList> contents_;
    _Bool useSlashOnVoid_;
    ComGoogleCommonHtmlTypesSafeHtmlBuilder_AttributeContract *hrefValueContract_;
}

+ (void)initialize;
- (void)dealloc;
- (id)build;
- (id)escapeAndAppendContentWithNSString:(id)arg1;
- (id)appendStyleContentWithComGoogleCommonHtmlTypesSafeStyleSheet:(id)arg1;
- (id)appendScriptContentWithComGoogleCommonHtmlTypesSafeScript:(id)arg1;
- (id)appendContentWithJavaUtilIterator:(id)arg1;
- (id)appendContentWithJavaLangIterable:(id)arg1;
- (id)appendContentWithComGoogleCommonHtmlTypesSafeHtmlArray:(id)arg1;
- (id)setDataAttributeWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setWrapWithNSString:(id)arg1;
- (id)setWidthWithNSString:(id)arg1;
- (id)setValueWithNSString:(id)arg1;
- (id)setValignWithNSString:(id)arg1;
- (id)setTypeWithNSString:(id)arg1;
- (id)setTranslateWithNSString:(id)arg1;
- (id)setTitleWithNSString:(id)arg1;
- (id)setTargetWithComGoogleCommonHtmlTypesSafeHtmlBuilder_TargetValue:(id)arg1;
- (id)setTabindexWithNSString:(id)arg1;
- (id)setSummaryWithNSString:(id)arg1;
- (id)setStyleWithComGoogleCommonHtmlTypesSafeStyle:(id)arg1;
- (id)setStepWithNSString:(id)arg1;
- (id)setStartWithNSString:(id)arg1;
- (id)setSrcdocWithComGoogleCommonHtmlTypesSafeHtml:(id)arg1;
- (id)setSrcWithComGoogleCommonHtmlTypesTrustedResourceUrl:(id)arg1;
- (id)setSrcWithComGoogleCommonHtmlTypesSafeUrl:(id)arg1;
- (id)setSpellcheckWithNSString:(id)arg1;
- (id)setSpanWithNSString:(id)arg1;
- (id)setSizesWithNSString:(id)arg1;
- (id)setSizeWithNSString:(id)arg1;
- (id)setShapeWithNSString:(id)arg1;
- (id)setSelectedWithNSString:(id)arg1;
- (id)setRowspanWithNSString:(id)arg1;
- (id)setRowsWithNSString:(id)arg1;
- (id)setRoleWithNSString:(id)arg1;
- (id)setReversedWithNSString:(id)arg1;
- (id)setRequiredWithNSString:(id)arg1;
- (id)setRelWithNSString:(id)arg1;
- (id)setReadonlyWithNSString:(id)arg1;
- (id)setPreloadWithNSString:(id)arg1;
- (id)setPosterWithComGoogleCommonHtmlTypesSafeUrl:(id)arg1;
- (id)setPlaceholderWithNSString:(id)arg1;
- (id)setPatternWithNSString:(id)arg1;
- (id)setOpenWithNSString:(id)arg1;
- (id)setNonceWithNSString:(id)arg1;
- (id)setNameWithPrefixWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setNameWithNSString:(id)arg1;
- (id)setMutedWithNSString:(id)arg1;
- (id)setMultipleWithNSString:(id)arg1;
- (id)setMinlengthWithNSString:(id)arg1;
- (id)setMinWithNSString:(id)arg1;
- (id)setMethodWithNSString:(id)arg1;
- (id)setMediaWithNSString:(id)arg1;
- (id)setMaxlengthWithNSString:(id)arg1;
- (id)setMaxWithNSString:(id)arg1;
- (id)setLoopWithNSString:(id)arg1;
- (id)setLoadingWithComGoogleCommonHtmlTypesSafeHtmlBuilder_LoadingValue:(id)arg1;
- (id)setListWithPrefixWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setListWithNSString:(id)arg1;
- (id)setLangWithNSString:(id)arg1;
- (id)setLabelWithNSString:(id)arg1;
- (id)setItemtypeWithNSString:(id)arg1;
- (id)setItemscopeWithNSString:(id)arg1;
- (id)setItemrefWithNSString:(id)arg1;
- (id)setItempropWithNSString:(id)arg1;
- (id)setItemidWithNSString:(id)arg1;
- (id)setIsmapWithNSString:(id)arg1;
- (id)setIdWithPrefixWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setIdWithNSString:(id)arg1;
- (id)setIconWithComGoogleCommonHtmlTypesSafeUrl:(id)arg1;
- (id)setHreflangWithNSString:(id)arg1;
- (id)setHrefWithComGoogleCommonHtmlTypesTrustedResourceUrl:(id)arg1;
- (id)setHrefWithComGoogleCommonHtmlTypesSafeUrl:(id)arg1;
- (id)setHiddenWithNSString:(id)arg1;
- (id)setHeightWithNSString:(id)arg1;
- (id)setFrameborderWithNSString:(id)arg1;
- (id)setFormmethodWithNSString:(id)arg1;
- (id)setFormenctypeWithNSString:(id)arg1;
- (id)setFormactionWithComGoogleCommonHtmlTypesSafeUrl:(id)arg1;
- (id)setForWithPrefixWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setForWithNSString:(id)arg1;
- (id)setFaceWithNSString:(id)arg1;
- (id)setEnctypeWithNSString:(id)arg1;
- (id)setDraggableWithNSString:(id)arg1;
- (id)setDownloadWithNSString:(id)arg1;
- (id)setDisabledWithNSString:(id)arg1;
- (id)setDirWithComGoogleCommonHtmlTypesSafeHtmlBuilder_DirValue:(id)arg1;
- (id)setDatetimeWithNSString:(id)arg1;
- (id)setControlsWithNSString:(id)arg1;
- (id)setContenteditableWithNSString:(id)arg1;
- (id)setColspanWithNSString:(id)arg1;
- (id)setColsWithNSString:(id)arg1;
- (id)setColorWithNSString:(id)arg1;
- (id)setClassWithNSString:(id)arg1;
- (id)setCiteWithComGoogleCommonHtmlTypesSafeUrl:(id)arg1;
- (id)setCheckedWithNSString:(id)arg1;
- (id)setCellspacingWithNSString:(id)arg1;
- (id)setCellpaddingWithNSString:(id)arg1;
- (id)setBorderWithNSString:(id)arg1;
- (id)setBgcolorWithNSString:(id)arg1;
- (id)setAutoplayWithNSString:(id)arg1;
- (id)setAutofocusWithNSString:(id)arg1;
- (id)setAutocorrectWithNSString:(id)arg1;
- (id)setAutocompleteWithNSString:(id)arg1;
- (id)setAutocapitalizeWithNSString:(id)arg1;
- (id)setAsyncWithComGoogleCommonHtmlTypesSafeHtmlBuilder_AsyncValue:(id)arg1;
- (id)setAriaValuetextWithNSString:(id)arg1;
- (id)setAriaValuenowWithNSString:(id)arg1;
- (id)setAriaValueminWithNSString:(id)arg1;
- (id)setAriaValuemaxWithNSString:(id)arg1;
- (id)setAriaSortWithNSString:(id)arg1;
- (id)setAriaSetsizeWithNSString:(id)arg1;
- (id)setAriaSelectedWithNSString:(id)arg1;
- (id)setAriaRequiredWithNSString:(id)arg1;
- (id)setAriaRelevantWithNSString:(id)arg1;
- (id)setAriaReadonlyWithNSString:(id)arg1;
- (id)setAriaPressedWithNSString:(id)arg1;
- (id)setAriaPosinsetWithNSString:(id)arg1;
- (id)setAriaOwnsWithPrefixWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setAriaOwnsWithNSString:(id)arg1;
- (id)setAriaOrientationWithNSString:(id)arg1;
- (id)setAriaMultiselectableWithNSString:(id)arg1;
- (id)setAriaMultilineWithNSString:(id)arg1;
- (id)setAriaLiveWithNSString:(id)arg1;
- (id)setAriaLevelWithNSString:(id)arg1;
- (id)setAriaLabelWithNSString:(id)arg1;
- (id)setAriaInvalidWithNSString:(id)arg1;
- (id)setAriaHiddenWithNSString:(id)arg1;
- (id)setAriaHaspopupWithNSString:(id)arg1;
- (id)setAriaExpandedWithNSString:(id)arg1;
- (id)setAriaDropeffectWithNSString:(id)arg1;
- (id)setAriaDisabledWithNSString:(id)arg1;
- (id)setAriaCheckedWithNSString:(id)arg1;
- (id)setAriaBusyWithNSString:(id)arg1;
- (id)setAriaAutocompleteWithNSString:(id)arg1;
- (id)setAriaAtomicWithNSString:(id)arg1;
- (id)setAriaActivedescendantWithPrefixWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)setAriaActivedescendantWithNSString:(id)arg1;
- (id)setAltWithNSString:(id)arg1;
- (id)setAlignWithNSString:(id)arg1;
- (id)setActionWithComGoogleCommonHtmlTypesSafeUrl:(id)arg1;
- (id)setAcceptWithNSString:(id)arg1;
- (id)useSlashOnVoid;

@end

