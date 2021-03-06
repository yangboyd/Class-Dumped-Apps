//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMenuElement.h"

@class NSArray;

@interface AWEMenu : AWEMenuElement
{
    long long _depth;
    NSArray *_childMenus;
}

@property(readonly, copy, nonatomic) NSArray *childMenus; // @synthesize childMenus=_childMenus;
- (void).cxx_destruct;
- (_Bool)validateIndexPath:(id)arg1;
- (id)menuAtIndexPath:(id)arg1;
@property(readonly, nonatomic) _Bool isLeaf;
@property(readonly, nonatomic) long long depth; // @synthesize depth=_depth;
- (id)initWithName:(id)arg1 childMenus:(id)arg2;

@end

