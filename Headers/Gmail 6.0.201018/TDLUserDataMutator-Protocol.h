//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class TDLUserExperimentalUpdateBuilder, TDLUserMetadataUpdateBuilder, TDLUserPrefsUpdateBuilder;
@protocol TDLMutationResult, TDLPlatformWriteContext;

@protocol TDLUserDataMutator <JavaObject>
- (id <TDLMutationResult>)updateUserExperimentalWithTDLPlatformWriteContext:(id <TDLPlatformWriteContext>)arg1 withTDLUserExperimentalUpdateBuilder:(TDLUserExperimentalUpdateBuilder *)arg2;
- (id <TDLMutationResult>)updateUserPrefsWithTDLPlatformWriteContext:(id <TDLPlatformWriteContext>)arg1 withTDLUserPrefsUpdateBuilder:(TDLUserPrefsUpdateBuilder *)arg2;
- (id <TDLMutationResult>)updateUserMetadataWithTDLPlatformWriteContext:(id <TDLPlatformWriteContext>)arg1 withTDLUserMetadataUpdateBuilder:(TDLUserMetadataUpdateBuilder *)arg2;
@end

