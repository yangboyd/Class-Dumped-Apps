//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSString;
@protocol _TtP20SuperbirdFeatureImpl29SuperbirdVoiceSessionDelegate_;

@protocol _TtP20SuperbirdFeatureImpl21SuperbirdVoiceSession_
@property(nonatomic, retain) id <_TtP20SuperbirdFeatureImpl29SuperbirdVoiceSessionDelegate_> delegate;
- (void)recordWithData:(NSData *)arg1;
- (void)closeVoiceSession;
- (void)startVoiceSessionWithSessionID:(NSString *)arg1;
@end

