//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FPSDelegate-Protocol.h"

@class NSString, UILabel;

@interface FPSView : UIView <FPSDelegate>
{
    int _fps;
    UILabel *_fpsLabel;
}

@property(retain, nonatomic) UILabel *fpsLabel; // @synthesize fpsLabel=_fpsLabel;
@property(nonatomic) int fps; // @synthesize fps=_fps;
- (void).cxx_destruct;
- (void)fpsUpdate:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

