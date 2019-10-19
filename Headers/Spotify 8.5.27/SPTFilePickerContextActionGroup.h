//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFilePickerContextActionGroup-Protocol.h"

@class NSArray, NSString;

@interface SPTFilePickerContextActionGroup : NSObject <SPTFilePickerContextActionGroup>
{
    NSArray *_actions;
    NSString *_title;
    long long _icon;
}

@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)removeActionAtIndex:(unsigned long long)arg1;
- (void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)actionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfActions;
- (id)initWithTitle:(id)arg1 actions:(id)arg2;
- (id)initWithTitle:(id)arg1 icon:(long long)arg2 actions:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

