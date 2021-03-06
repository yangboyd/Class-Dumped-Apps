//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSArray, NSString;

@interface IGDirectThreadActivityAnnouncement : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    NSString *_action_actionLogTitle;
    NSArray *_action_actionTextAttributes;
    _Bool _action_hiddenInThread;
    NSString *_voip_videoCallId;
    NSString *_voip_serverInfoData;
    long long _voip_voipEventType;
    NSString *_voip_voipTitle;
    NSArray *_voip_voipTextAttributes;
    _Bool _voip_threadHasAudioOnlyCall;
}

+ (id)voipWithVideoCallId:(id)arg1 serverInfoData:(id)arg2 voipEventType:(long long)arg3 voipTitle:(id)arg4 voipTextAttributes:(id)arg5 threadHasAudioOnlyCall:(_Bool)arg6;
+ (id)actionWithActionLogTitle:(id)arg1 actionTextAttributes:(id)arg2 hiddenInThread:(_Bool)arg3;
- (void).cxx_destruct;
- (_Bool)matchBooleanAction:(CDUnknownBlockType)arg1 voip:(CDUnknownBlockType)arg2;
- (void)matchAction:(CDUnknownBlockType)arg1 voip:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

