//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _TtC6Reddit23WeakUITableViewDelegate;

@interface _TtC6Reddit36CommunitiesTableViewDelegateMediator : NSObject
{
    // Error parsing type: , name: allDelegates
    // Error parsing type: , name: primaryDelegate
    // Error parsing type: , name: sectionDelegates
}

- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithPrimaryDelegate:(id)arg1 sectionDelegates:(id)arg2;
@property(nonatomic, readonly) NSArray *sectionDelegates;
@property(nonatomic, readonly) _TtC6Reddit23WeakUITableViewDelegate *primaryDelegate; // @synthesize primaryDelegate;
@property(nonatomic, readonly) NSArray *allDelegates;

@end

