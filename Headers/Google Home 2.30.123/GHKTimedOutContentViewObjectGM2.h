//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOTextContentViewObject.h"

#import "GHKTimedOutContentViewObject-Protocol.h"

@class NSString;
@protocol GHKTimedOutContentViewDelegate;

@interface GHKTimedOutContentViewObjectGM2 : GOOTextContentViewObject <GHKTimedOutContentViewObject>
{
    id <GHKTimedOutContentViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GHKTimedOutContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)viewObject;
- (Class)contentViewClass;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

