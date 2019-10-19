//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMButton.h"

@class GWAFlowContext, OrchLink;
@protocol GWALinkViewDelegate;

@interface GWALinkView : QTMButton
{
    id <GWALinkViewDelegate> _delegate;
    GWAFlowContext *_context;
    OrchLink *_proto;
    unsigned long long _displayType;
}

@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) OrchLink *proto; // @synthesize proto=_proto;
- (void).cxx_destruct;
- (void)tapLink;
- (void)linkTapped:(id)arg1;
- (id)initWithLink:(id)arg1 context:(id)arg2 delegate:(id)arg3;

@end

