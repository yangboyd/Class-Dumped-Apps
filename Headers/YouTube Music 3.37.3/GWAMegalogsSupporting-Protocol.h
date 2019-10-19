//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GWAMegalogsContext, NSArray, NSNumber;

@protocol GWAMegalogsSupporting <NSObject>
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext;
- (void)prepareMegalogsContexts;

@optional
- (void)logImpressions;
- (void)wrapUpMegalogsContexts;
@end

