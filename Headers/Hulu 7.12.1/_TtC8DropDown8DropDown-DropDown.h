//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropDown/_TtC8DropDown8DropDown.h>

#import <DropDown/UITableViewDataSource-Protocol.h>
#import <DropDown/UITableViewDelegate-Protocol.h>

@class NSIndexPath;

@interface _TtC8DropDown8DropDown (DropDown) <UITableViewDataSource, UITableViewDelegate>
+ (void)startListeningToKeyboard;
- (void)layoutSubviews;
- (void)updateConstraints;
- (_Bool)accessibilityPerformEscape;
- (id)show;
@property(nonatomic, readonly) NSIndexPath *indexPathForSelectedRow;
- (void)deselectRow:(long long)arg1;
- (void)clearSelection;
- (void)selectRow:(long long)arg1 scrollPosition:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dismissableViewTapped;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)keyboardUpdate;
@end

