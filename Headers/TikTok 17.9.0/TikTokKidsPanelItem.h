//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIImage;

@interface TikTokKidsPanelItem : NSObject
{
    NSString *_title;
    UIImage *_image;
    NSMutableArray *_ClickHandlers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *ClickHandlers; // @synthesize ClickHandlers=_ClickHandlers;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)itemDidSelected;
- (void)registerHandler:(CDUnknownBlockType)arg1;

@end

