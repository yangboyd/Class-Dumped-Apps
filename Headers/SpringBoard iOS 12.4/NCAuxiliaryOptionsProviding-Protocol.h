//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol NCAuxiliaryOptionsProviding <NSObject>
- (void)configureOptionButtons:(NSArray *)arg1;

@optional
@property(nonatomic) _Bool auxiliaryOptionsVisible;
@property(readonly, nonatomic) unsigned long long numberOfOptionButtons;
@property(readonly, copy, nonatomic) NSString *optionsSummaryText;
@property(readonly, copy, nonatomic) NSString *optionsSummaryTitle;
@end

