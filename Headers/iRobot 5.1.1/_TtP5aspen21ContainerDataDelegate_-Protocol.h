//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol _TtP5aspen21ContainerDataDelegate_
- (void)updateCommandDefValidityWithIsValid:(_Bool)arg1;
- (void)updateCommandDef:(NSString *)arg1;
- (void)cleanUp;
- (void)refetchStateData;
- (void)timePickerCancelled;
- (void)timeSelectedWithHour:(long long)arg1 minute:(long long)arg2;
- (void)daysSelectedWithDays:(NSArray *)arg1;
- (void)deletePressed;
- (void)savePressedWithData:(NSString *)arg1;
- (void)collapsePressedWithData:(NSString *)arg1;
- (void)dismissPressed;

@optional
- (void)dayPickerCancelled;
- (void)setPayloadWithPayload:(NSString *)arg1;
@end

