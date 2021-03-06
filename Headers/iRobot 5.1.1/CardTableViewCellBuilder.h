//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface CardTableViewCellBuilder : NSObject
{
    UIImage *_headerImage;
    NSString *_headerText;
    NSString *_headerDate;
    UIImage *_statusIcon;
    NSString *_mainContentText;
    NSString *_bottomContentText;
}

+ (id)builder;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bottomContentText; // @synthesize bottomContentText=_bottomContentText;
@property(retain, nonatomic) NSString *mainContentText; // @synthesize mainContentText=_mainContentText;
@property(retain, nonatomic) UIImage *statusIcon; // @synthesize statusIcon=_statusIcon;
@property(retain, nonatomic) NSString *headerDate; // @synthesize headerDate=_headerDate;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
- (id)setBottomContentLabelText:(id)arg1;
- (id)setMainContentLabelText:(id)arg1;
- (id)setStatusIconImage:(id)arg1;
- (id)setHeaderDateLabelText:(id)arg1;
- (id)setHeaderTextLabelText:(id)arg1;
- (id)setHeaderIconImage:(id)arg1;
- (id)buildTableViewCell:(id)arg1;

@end

