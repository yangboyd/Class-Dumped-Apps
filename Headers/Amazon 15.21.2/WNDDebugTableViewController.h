//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class UISwitch;

@interface WNDDebugTableViewController : UITableViewController
{
    UISwitch *_integSwitchView;
    UISwitch *_gammaSwitchView;
}

@property(retain, nonatomic) UISwitch *gammaSwitchView; // @synthesize gammaSwitchView=_gammaSwitchView;
@property(retain, nonatomic) UISwitch *integSwitchView; // @synthesize integSwitchView=_integSwitchView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setState:(id)arg1;
- (void)viewDidLoad;

@end

