//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveMTInteractiveUserModel;

@interface IESLiveMTLinkMicMultiAudioGuestModel : NSObject
{
    IESLiveMTInteractiveUserModel *_userModel;
    CDUnknownBlockType _onUserViewClicked;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onUserViewClicked; // @synthesize onUserViewClicked=_onUserViewClicked;
@property(nonatomic) __weak IESLiveMTInteractiveUserModel *userModel; // @synthesize userModel=_userModel;
- (id)initWithUserModel:(id)arg1 onUserViewClicked:(CDUnknownBlockType)arg2;

@end

