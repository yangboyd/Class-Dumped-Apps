//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>
#import <Module_Framework/UITraitEnvironment-Protocol.h>

@class NSArray, SKTContact, SKTContactContentViewBase, SKTContactMethod;

@protocol SKTContactContentViewDelegate <NSObject, UITraitEnvironment>
- (_Bool)contactMethodIsPreviouslySharedWith:(SKTContactMethod *)arg1;
- (NSArray *)selectedMethodsForContact:(SKTContact *)arg1;
- (void)contactContentView:(SKTContactContentViewBase *)arg1 didDisplayContact:(SKTContact *)arg2;
- (void)contactContentView:(SKTContactContentViewBase *)arg1 didUpdateToExpandState:(_Bool)arg2;

@optional
- (_Bool)handlesTapNoResultsLearnMoreButton;
- (void)didTapNoResultsLearnMoreButton;
- (_Bool)contactContentView:(SKTContactContentViewBase *)arg1 shouldUpdateToExpandState:(_Bool)arg2;
- (void)contactContentView:(SKTContactContentViewBase *)arg1 didTapContactMethod:(SKTContact *)arg2 atIndex:(unsigned long long)arg3;
@end

