//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, _TtC7NordVPN15SubtitledButton;

@interface _TtC7NordVPN12TwoPlansView : UIView
{
    // Error parsing type: , name: titleLabels
    // Error parsing type: , name: subtitleLabels
    // Error parsing type: , name: yearPlanButton
    // Error parsing type: , name: quarterPlanButton
    // Error parsing type: , name: titles
    // Error parsing type: , name: subtitles
    // Error parsing type: , name: plans
    // Error parsing type: , name: layoutExtendsToEdges
    // Error parsing type: , name: isSelfSizing
    // Error parsing type: , name: formTitle
    // Error parsing type: , name: formSubtitle
    // Error parsing type: , name: onPlanSelect
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)quarterPlanAction:(id)arg1;
- (void)yearPlanAction:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak _TtC7NordVPN15SubtitledButton *quarterPlanButton; // @synthesize quarterPlanButton;
@property(nonatomic) __weak _TtC7NordVPN15SubtitledButton *yearPlanButton; // @synthesize yearPlanButton;
@property(nonatomic, copy) NSArray *subtitleLabels;
@property(nonatomic, copy) NSArray *titleLabels;

@end

