//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel;

@interface _TtC10ProtonMail24ContactGroupEditViewCell : UITableViewCell
{
    // Error parsing type: , name: nameLabel
    // Error parsing type: , name: emailLabel
    // Error parsing type: , name: shortNameLabel
    // Error parsing type: , name: deleteButton
    // Error parsing type: , name: deleteButtonImage
    // Error parsing type: , name: emailID
    // Error parsing type: , name: name
    // Error parsing type: , name: email
    // Error parsing type: , name: shortName
    // Error parsing type: , name: state
    // Error parsing type: , name: viewModel
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)deleteButtonTapped:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak UIImageView *deleteButtonImage; // @synthesize deleteButtonImage;
@property(nonatomic) __weak UIButton *deleteButton; // @synthesize deleteButton;
@property(nonatomic) __weak UILabel *shortNameLabel; // @synthesize shortNameLabel;
@property(nonatomic) __weak UILabel *emailLabel; // @synthesize emailLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel;

@end

