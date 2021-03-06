//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveMTRoomProfileStore, RACCommand;
@protocol IESLiveToastFactory, IESLiveUserService;

@interface IESLiveMTFollowButtonViewModel : NSObject
{
    _Bool _isOnFollowing;
    _Bool _isShowFollowBtn;
    long long _status;
    IESLiveMTRoomProfileStore *_store;
    CDUnknownBlockType _onFollowClicked;
    RACCommand *_clickCommand;
    id <IESLiveUserService> _userService;
    id <IESLiveToastFactory> _toastFactory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(nonatomic) _Bool isShowFollowBtn; // @synthesize isShowFollowBtn=_isShowFollowBtn;
@property(nonatomic) _Bool isOnFollowing; // @synthesize isOnFollowing=_isOnFollowing;
@property(readonly, nonatomic) RACCommand *clickCommand; // @synthesize clickCommand=_clickCommand;
@property(copy, nonatomic) CDUnknownBlockType onFollowClicked; // @synthesize onFollowClicked=_onFollowClicked;
@property(retain, nonatomic) IESLiveMTRoomProfileStore *store; // @synthesize store=_store;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)p_followAnchor;
- (id)init;

@end

