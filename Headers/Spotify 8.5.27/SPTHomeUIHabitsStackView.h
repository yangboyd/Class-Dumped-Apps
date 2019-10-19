//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class NSArray;
@protocol GLUETheme;

@interface SPTHomeUIHabitsStackView : UIStackView
{
    id <GLUETheme> _theme;
    NSArray *_cards;
    struct CGSize _containerViewSize;
}

@property(readonly, copy, nonatomic) NSArray *cards; // @synthesize cards=_cards;
@property(readonly, nonatomic) struct CGSize containerViewSize; // @synthesize containerViewSize=_containerViewSize;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)addCard:(id)arg1;
- (void)configure;
- (id)initWithTheme:(id)arg1 containerViewSize:(struct CGSize)arg2;

@end

