//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPodcastSectionTableViewCell.h"

@class NSArray, SPTPodcastChipsSectionViewModel, UIScrollView, UIStackView;
@protocol GLUETheme, SPTPodcastChipsSectionTableViewCellDelegate;

@interface SPTPodcastChipsSectionTableViewCell : SPTPodcastSectionTableViewCell
{
    id <SPTPodcastChipsSectionTableViewCellDelegate> _delegate;
    id <GLUETheme> _glueTheme;
    NSArray *_layoutConstraints;
    NSArray *_topics;
    SPTPodcastChipsSectionViewModel *_chipsSectionViewModel;
    UIStackView *_chipsStackView;
    UIScrollView *_scrollView;
    NSArray *_chipsViews;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *chipsViews; // @synthesize chipsViews=_chipsViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIStackView *chipsStackView; // @synthesize chipsStackView=_chipsStackView;
@property(retain, nonatomic) SPTPodcastChipsSectionViewModel *chipsSectionViewModel; // @synthesize chipsSectionViewModel=_chipsSectionViewModel;
@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(nonatomic) __weak id <SPTPodcastChipsSectionTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)chipButtonTapped:(id)arg1;
- (id)createActionButtonWithTitle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addButtonsWithTopics:(id)arg1;
- (void)updateWithViewModel:(id)arg1 atIndexPath:(id)arg2;
- (void)createConstraints;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

