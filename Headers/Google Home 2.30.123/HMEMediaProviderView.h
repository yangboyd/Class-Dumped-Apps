//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, NSURL, UIImage;
@protocol HMEUniversalRemoteAppearance;

@interface HMEMediaProviderView : UIControl
{
    // Error parsing type: , name: itemAppearance
    // Error parsing type: , name: icon
    // Error parsing type: , name: iconView
    // Error parsing type: , name: nameLabel
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemAppearance:(id)arg1;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, retain) UIImage *iconImage;
@property(nonatomic, copy) NSURL *iconURL;
@property(nonatomic) __weak id <HMEUniversalRemoteAppearance> itemAppearance; // @synthesize itemAppearance;

@end

