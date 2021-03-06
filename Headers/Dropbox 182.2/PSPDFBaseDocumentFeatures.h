//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/PSPDFDocumentFeaturesSource-Protocol.h>

@class NSString, PSPDFDocument, PSPDFDocumentFeatures;

@interface PSPDFBaseDocumentFeatures : NSObject <PSPDFDocumentFeaturesSource>
{
    PSPDFDocumentFeatures *_features;
    PSPDFDocument *_document;
}

@property(readonly, nonatomic) __weak PSPDFDocument *document; // @synthesize document=_document;
@property(nonatomic) __weak PSPDFDocumentFeatures *features; // @synthesize features=_features;
- (void).cxx_destruct;
- (id)initWithDocument:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool canEditBookmarks;
@property(readonly, nonatomic) _Bool canModify;
@property(readonly, nonatomic) _Bool canPrint;
@property(readonly, nonatomic) _Bool canShowAnnotationReplies;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

