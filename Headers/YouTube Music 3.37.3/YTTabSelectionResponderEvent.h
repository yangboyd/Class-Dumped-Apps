//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class NSString, UIView, YTICommand;

@interface YTTabSelectionResponderEvent : YTResponderEvent
{
    YTICommand *_endpoint;
    NSString *_tabIdentifier;
    unsigned long long _tabIndex;
    UIView *_fromView;
}

+ (id)eventWithEndpoint:(id)arg1 tabIdentifier:(id)arg2 tabIndex:(unsigned long long)arg3 fromView:(id)arg4 firstResponder:(id)arg5;
@property(readonly, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(readonly, nonatomic) unsigned long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(readonly, nonatomic) NSString *tabIdentifier; // @synthesize tabIdentifier=_tabIdentifier;
@property(readonly, nonatomic) YTICommand *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)arg1 tabIdentifier:(id)arg2 tabIndex:(unsigned long long)arg3 fromView:(id)arg4 firstResponder:(id)arg5;

@end

