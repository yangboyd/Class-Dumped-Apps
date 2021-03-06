//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOTextField, NSString;

@protocol ASTMenuTextEntryDelegate <NSObject>
- (void)textEntryItemWithUUID:(NSString *)arg1 didEndEditingWithText:(NSString *)arg2;

@optional
- (unsigned long long)validatorEventsForTextEntryItemWithUUID:(NSString *)arg1;
- (NSString *)textEntryItemWithUUID:(NSString *)arg1 errorTextWithEnteredText:(NSString *)arg2;
- (_Bool)textEntryItemWithUUID:(NSString *)arg1 shouldAllowText:(NSString *)arg2;
- (void)textEntryItemWithUUID:(NSString *)arg1 textFieldDidChange:(GOOTextField *)arg2;
- (void)textEntryItemWithUUID:(NSString *)arg1 editingWithText:(NSString *)arg2;
- (void)textEntryItemWithUUID:(NSString *)arg1 didBeginEditingWithText:(NSString *)arg2;
@end

