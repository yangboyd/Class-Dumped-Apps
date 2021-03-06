//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IGRadioButton, IGShareToFacebookAudienceCellConfiguration;
@protocol IGShareToFacebookAudienceCellDelegate;

@interface IGShareToFacebookAudienceCell : UITableViewCell
{
    IGShareToFacebookAudienceCellConfiguration *_configuration;
    IGRadioButton *_radioButton;
    id <IGShareToFacebookAudienceCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didSelectButton:(id)arg1;
- (void)_createRadioButton:(_Bool)arg1;
- (void)setCellDelegate:(id)arg1;
- (void)configure:(id)arg1 selected:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

