//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTContextMenuTaskAction.h"

#import "SPTContextMenuAction-Protocol.h"

@class NSAttributedString, NSString;

@interface SPTAdsContextMenuCustomAction : SPTContextMenuTaskAction <SPTContextMenuAction>
{
    CDUnknownBlockType _actionBlock;
    long long _actionIcon;
    NSString *_actionTitle;
    NSAttributedString *_actionAttributedTitle;
}

@property(copy, nonatomic) NSAttributedString *actionAttributedTitle; // @synthesize actionAttributedTitle=_actionAttributedTitle;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) long long actionIcon; // @synthesize actionIcon=_actionIcon;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (id)performAction;
@property(readonly, nonatomic) NSAttributedString *attributedTitle;
- (long long)icon;
- (id)title;
- (id)initWithIcon:(long long)arg1 actionAttributedTitle:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)initWithIcon:(long long)arg1 actionTitle:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

