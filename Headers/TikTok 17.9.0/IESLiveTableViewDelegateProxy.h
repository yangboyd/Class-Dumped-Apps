//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITableViewDelegate-Protocol.h"

@class IESLivePopupItem, NSString;
@protocol IESLivePopupService, UITableViewDelegate;

@interface IESLiveTableViewDelegateProxy : NSObject <UITableViewDelegate>
{
    long long _popupItemType;
    id <UITableViewDelegate> _originDelegate;
    IESLivePopupItem *_popupItem;
    id <IESLivePopupService> _popupService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLivePopupService> popupService; // @synthesize popupService=_popupService;
@property(nonatomic) __weak IESLivePopupItem *popupItem; // @synthesize popupItem=_popupItem;
@property(nonatomic) __weak id <UITableViewDelegate> originDelegate; // @synthesize originDelegate=_originDelegate;
@property(nonatomic) long long popupItemType; // @synthesize popupItemType=_popupItemType;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

