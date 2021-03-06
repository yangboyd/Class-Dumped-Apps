//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSnippetRenderingService-Protocol.h"

@class NSString;
@protocol DYNMemberCacheService, GIPAccountID;

@interface DYNSnippetRenderingServiceImpl : NSObject <DYNSnippetRenderingService>
{
    id <GIPAccountID> _accountID;
    id <DYNMemberCacheService> _memberCacheService;
}

- (void).cxx_destruct;
- (id)attributedSnippetTextWithAuthorString:(id)arg1 originalSnippetText:(id)arg2 italic:(_Bool)arg3;
- (void)onDidFetchSnippetAuthorString:(id)arg1 attributedText:(id)arg2 italic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)snippetFromGSuiteIntegrationAnnotation:(id)arg1 annotations:(id)arg2;
- (id)attributedStringWithText:(id)arg1 italic:(_Bool)arg2;
- (id)attributedAuthorStringWithAuthor:(id)arg1 italic:(_Bool)arg2;
- (void)removeLineBreaksFromSnippetLeading:(id)arg1;
- (id)highlightedSnippetTextWithText:(id)arg1 annotations:(id)arg2;
- (id)snippetTextFromUploadMetadataWithSnippet:(id)arg1;
- (_Bool)isSnippetTextFromUploadMetadata:(id)arg1;
- (id)snippetTextWithAnnotations:(id)arg1;
- (_Bool)isSnippetVideoMeeting:(id)arg1;
- (_Bool)isSnippetTextIsFromAnnotationWithSnippet:(id)arg1;
- (id)authorStringWithCreator:(id)arg1 groupSummary:(id)arg2;
- (void)fetchSnippetAuthorStringWithGroupSummary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)snippetAuthorStringWithGroupSummary:(id)arg1;
- (id)attributedTextForSnippet:(id)arg1 outItalic:(out _Bool *)arg2;
- (void)fetchSnippetTextWithGroupSummary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)snippetTextWithGroupSummary:(id)arg1 fetchNeeded:(out _Bool *)arg2;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

