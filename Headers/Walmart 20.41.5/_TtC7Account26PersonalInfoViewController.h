//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class UILabel, UIView, _TtC10CoreStyles10CoreSwitch, _TtC10CoreStyles18CoreTertiaryButton, _TtC10CoreStyles9CoreLabel;

@interface _TtC7Account26PersonalInfoViewController : UITableViewController
{
    // Error parsing type: , name: customerId
    // Error parsing type: , name: customerCID
    // Error parsing type: , name: flashSuccessLabel
    // Error parsing type: , name: fullNamePromptLabel
    // Error parsing type: , name: fullNameLabel
    // Error parsing type: , name: emailPromptLabel
    // Error parsing type: , name: emailLabel
    // Error parsing type: , name: enableTouchIDLabel
    // Error parsing type: , name: enableTouchIdSwitch
    // Error parsing type: , name: gotoWalmartLabel
    // Error parsing type: , name: gotoWalmartButton
    // Error parsing type: , name: touchIDIndexPath
    // Error parsing type: , name: footerCell
    // Error parsing type: , name: ccm
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)enableTouchIdValueChanged:(id)arg1;
- (void)goToWalmartTapped:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIView *footerCell; // @synthesize footerCell;
@property(nonatomic) __weak _TtC10CoreStyles18CoreTertiaryButton *gotoWalmartButton; // @synthesize gotoWalmartButton;
@property(nonatomic) __weak _TtC10CoreStyles9CoreLabel *gotoWalmartLabel; // @synthesize gotoWalmartLabel;
@property(nonatomic) __weak _TtC10CoreStyles10CoreSwitch *enableTouchIdSwitch; // @synthesize enableTouchIdSwitch;
@property(nonatomic) __weak UILabel *enableTouchIDLabel; // @synthesize enableTouchIDLabel;
@property(nonatomic) __weak _TtC10CoreStyles9CoreLabel *emailLabel; // @synthesize emailLabel;
@property(nonatomic) __weak _TtC10CoreStyles9CoreLabel *emailPromptLabel; // @synthesize emailPromptLabel;
@property(nonatomic) __weak _TtC10CoreStyles9CoreLabel *fullNameLabel; // @synthesize fullNameLabel;
@property(nonatomic) __weak _TtC10CoreStyles9CoreLabel *fullNamePromptLabel; // @synthesize fullNamePromptLabel;
@property(nonatomic) __weak _TtC10CoreStyles9CoreLabel *flashSuccessLabel; // @synthesize flashSuccessLabel;

@end

