//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWTableCell-Protocol.h"

@class NSMutableArray;

@interface AWFormInputCell : NSObject <AWTableCell>
{
    NSMutableArray *views;
}

- (void).cxx_destruct;
- (id)cellForTableView:(id)arg1;
- (id)initWithViews:(id)arg1;
- (id)initWithInput:(id)arg1;

@end

