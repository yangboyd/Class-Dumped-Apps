//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNDataViewCellLayout.h>

@protocol T1StatusViewLayoutState;

@interface T1StatusCellLayout : TFNDataViewCellLayout
{
    unsigned long long _statusOptions;
    id <T1StatusViewLayoutState> _statusViewLayoutState;
    struct CGRect _statusViewFrame;
}

@property(retain, nonatomic) id <T1StatusViewLayoutState> statusViewLayoutState; // @synthesize statusViewLayoutState=_statusViewLayoutState;
@property(nonatomic) struct CGRect statusViewFrame; // @synthesize statusViewFrame=_statusViewFrame;
@property(nonatomic) unsigned long long statusOptions; // @synthesize statusOptions=_statusOptions;
- (void).cxx_destruct;

@end

