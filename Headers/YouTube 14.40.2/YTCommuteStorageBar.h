//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyling.h"

@class NSString;

@interface YTCommuteStorageBar : UIView <YTPageStyling>
{
    unsigned long long _usedStorageBytes;
    unsigned long long _freeStorageBytes;
}

@property(nonatomic) unsigned long long freeStorageBytes; // @synthesize freeStorageBytes=_freeStorageBytes;
@property(nonatomic) unsigned long long usedStorageBytes; // @synthesize usedStorageBytes=_usedStorageBytes;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

