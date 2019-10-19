//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SKTContact, SKTContactContentViewBase, SKTContactMethod;

@protocol SKTContactContentViewDelegate <NSObject>
- (_Bool)contactMethodIsPreviouslySharedWith:(SKTContactMethod *)arg1;
- (NSArray *)selectedMethodsForContact:(SKTContact *)arg1;
- (void)contactContentView:(SKTContactContentViewBase *)arg1 didDisplayContact:(SKTContact *)arg2;
- (void)contactContentView:(SKTContactContentViewBase *)arg1 didUpdateToExpandState:(_Bool)arg2;

@optional
- (_Bool)contactContentView:(SKTContactContentViewBase *)arg1 shouldUpdateToExpandState:(_Bool)arg2;
- (void)contactContentView:(SKTContactContentViewBase *)arg1 didTapContactMethod:(SKTContact *)arg2 atIndex:(unsigned long long)arg3;
@end

