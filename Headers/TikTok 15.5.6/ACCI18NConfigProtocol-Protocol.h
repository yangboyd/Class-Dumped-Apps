//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSBundle, NSString;

@protocol ACCI18NConfigProtocol <NSObject>
@property(copy, nonatomic) NSString *currentRegion;
@property(copy, nonatomic) NSString *currentLanguage;

@optional
@property(retain, nonatomic) NSBundle *languageBundle;
@property(copy, nonatomic) NSString *defaultLanguage;
@end

