//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASTQuery, ASTSearchResult, ASTVoiceClient, NSArray, NSError;
@protocol ASTS3VoiceRecognitionDelegate;

@protocol ASTVoiceClientDelegate <NSObject>
- (void)s3Client:(ASTVoiceClient *)arg1 didFailWithError:(NSError *)arg2 query:(ASTQuery *)arg3;
- (void)s3Client:(ASTVoiceClient *)arg1 didReceiveSearchResult:(ASTSearchResult *)arg2;
- (void)s3ClientDidCancelVoiceSearch:(ASTVoiceClient *)arg1;
- (void)s3Client:(ASTVoiceClient *)arg1 didReceiveConversationStarterSuggestions:(NSArray *)arg2;
- (void)s3ClientDidStartVoiceSearch:(ASTVoiceClient *)arg1;
- (id <ASTS3VoiceRecognitionDelegate>)s3ClientWillStartVoiceSearch:(ASTVoiceClient *)arg1;
@end

