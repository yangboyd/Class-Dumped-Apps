//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseReceiptTableViewCell.h"

@class NSLayoutConstraint, UILabel;

@interface WAReceiptTableViewCell : WABaseReceiptTableViewCell
{
    UILabel *_messageStatusLabel;
    UILabel *_messageStatusIcon;
    NSLayoutConstraint *_statusIconCenterX;
    NSLayoutConstraint *_statusTextLeading;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *statusTextLeading; // @synthesize statusTextLeading=_statusTextLeading;
@property(retain, nonatomic) NSLayoutConstraint *statusIconCenterX; // @synthesize statusIconCenterX=_statusIconCenterX;
@property(retain, nonatomic) UILabel *messageStatusIcon; // @synthesize messageStatusIcon=_messageStatusIcon;
@property(readonly, nonatomic) UILabel *messageStatusLabel; // @synthesize messageStatusLabel=_messageStatusLabel;
- (void)layoutSubviews;
- (void)setReceiptType:(long long)arg1 isMediaMessage:(_Bool)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

