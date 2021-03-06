//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PDFCDocumentSearcherQuery : NSObject
{
    _Bool _generateTextPreviews;
    _Bool _searchAnnotations;
    _Bool _searchAnnotationReplies;
    _Bool _searchAllPages;
    _Bool _returnEmptyResults;
    int _maximumSearchResults;
    NSString *_searchString;
    unsigned long long _compareOptions;
    NSArray *_priorityPages;
    struct _NSRange _previewRange;
}

+ (id)DocumentSearcherQueryWithSearchString:(id)arg1 compareOptions:(unsigned long long)arg2 generateTextPreviews:(_Bool)arg3 searchAnnotations:(_Bool)arg4 searchAnnotationReplies:(_Bool)arg5 maximumSearchResults:(int)arg6 searchAllPages:(_Bool)arg7 returnEmptyResults:(_Bool)arg8 priorityPages:(id)arg9 previewRange:(struct _NSRange)arg10;
@property(readonly, nonatomic) struct _NSRange previewRange; // @synthesize previewRange=_previewRange;
@property(readonly, nonatomic) NSArray *priorityPages; // @synthesize priorityPages=_priorityPages;
@property(readonly, nonatomic) _Bool returnEmptyResults; // @synthesize returnEmptyResults=_returnEmptyResults;
@property(readonly, nonatomic) _Bool searchAllPages; // @synthesize searchAllPages=_searchAllPages;
@property(readonly, nonatomic) int maximumSearchResults; // @synthesize maximumSearchResults=_maximumSearchResults;
@property(readonly, nonatomic) _Bool searchAnnotationReplies; // @synthesize searchAnnotationReplies=_searchAnnotationReplies;
@property(readonly, nonatomic) _Bool searchAnnotations; // @synthesize searchAnnotations=_searchAnnotations;
@property(readonly, nonatomic) _Bool generateTextPreviews; // @synthesize generateTextPreviews=_generateTextPreviews;
@property(readonly, nonatomic) unsigned long long compareOptions; // @synthesize compareOptions=_compareOptions;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSearchString:(id)arg1 compareOptions:(unsigned long long)arg2 generateTextPreviews:(_Bool)arg3 searchAnnotations:(_Bool)arg4 searchAnnotationReplies:(_Bool)arg5 maximumSearchResults:(int)arg6 searchAllPages:(_Bool)arg7 returnEmptyResults:(_Bool)arg8 priorityPages:(id)arg9 previewRange:(struct _NSRange)arg10;

@end

