//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWESearchHistoryNewStyleViewController, NSString, UIViewController;

@interface AWESearchHistoryTwoColumnTableViewCell : UITableViewCell
{
    UIViewController *_parentViewController;
    AWESearchHistoryNewStyleViewController *_newHistoryViewController;
    CDUnknownBlockType _tapBlock;
    long long _source;
    NSString *_tabKey;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tabKey; // @synthesize tabKey=_tabKey;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) AWESearchHistoryNewStyleViewController *newHistoryViewController; // @synthesize newHistoryViewController=_newHistoryViewController;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)configureUI;
- (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

