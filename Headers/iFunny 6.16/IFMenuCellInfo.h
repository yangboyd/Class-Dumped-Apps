//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFMenuCellInfoProtocol-Protocol.h>

@class IFChatCounterService, NSString;
@protocol IFMenuCellProtocol;

@interface IFMenuCellInfo : NSObject <IFMenuCellInfoProtocol>
{
    _Bool _needShowAvatar;
    _Bool _isActive;
    _Bool _isNeedTimer;
    _Bool _shouldUpdateCounterBadge;
    NSObject<IFMenuCellProtocol> *cell;
    NSString *_avatarUrl;
    NSString *_title;
    NSString *_badge;
    unsigned long long _menuItem;
    IFChatCounterService *_chatCounterService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IFChatCounterService *chatCounterService; // @synthesize chatCounterService=_chatCounterService;
@property(nonatomic) unsigned long long menuItem; // @synthesize menuItem=_menuItem;
@property(nonatomic) _Bool shouldUpdateCounterBadge; // @synthesize shouldUpdateCounterBadge=_shouldUpdateCounterBadge;
@property(nonatomic) _Bool isNeedTimer; // @synthesize isNeedTimer=_isNeedTimer;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) NSString *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(nonatomic) _Bool needShowAvatar; // @synthesize needShowAvatar=_needShowAvatar;
@property(nonatomic) __weak NSObject<IFMenuCellProtocol> *cell; // @synthesize cell;
- (id)badgeForItem:(unsigned long long)arg1;
- (id)titleForItem:(unsigned long long)arg1;
@property(readonly, nonatomic) long long badgeType;
- (void)updateNotificationCounters;
- (id)initWithItem:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

