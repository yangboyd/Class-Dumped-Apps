//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UISwitch;

@interface SCAlertDescriptionToggleView : UIView
{
    UISwitch *_toggle;
    UILabel *_textLabel;
    double _toggleScale;
}

@property(nonatomic) double toggleScale; // @synthesize toggleScale=_toggleScale;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UISwitch *toggle; // @synthesize toggle=_toggle;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

