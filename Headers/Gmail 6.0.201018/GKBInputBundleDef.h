//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GKBKeyboardTypeMapEntry, NSString;

@interface GKBInputBundleDef : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *baseFile; // @dynamic baseFile;
@property(retain, nonatomic) GKBKeyboardTypeMapEntry *digitKeyboard; // @dynamic digitKeyboard;
@property(nonatomic) _Bool hasBaseFile; // @dynamic hasBaseFile;
@property(nonatomic) _Bool hasDigitKeyboard; // @dynamic hasDigitKeyboard;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasImeClass; // @dynamic hasImeClass;
@property(nonatomic) _Bool hasImeId; // @dynamic hasImeId;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(nonatomic) _Bool hasLanguage; // @dynamic hasLanguage;
@property(nonatomic) _Bool hasMoreSymbolKeyboard; // @dynamic hasMoreSymbolKeyboard;
@property(nonatomic) _Bool hasPrimeKeyboard; // @dynamic hasPrimeKeyboard;
@property(nonatomic) _Bool hasSupportAutoCapitalization; // @dynamic hasSupportAutoCapitalization;
@property(nonatomic) _Bool hasSymbolKeyboard; // @dynamic hasSymbolKeyboard;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *imeClass; // @dynamic imeClass;
@property(copy, nonatomic) NSString *imeId; // @dynamic imeId;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) GKBKeyboardTypeMapEntry *moreSymbolKeyboard; // @dynamic moreSymbolKeyboard;
@property(retain, nonatomic) GKBKeyboardTypeMapEntry *primeKeyboard; // @dynamic primeKeyboard;
@property(nonatomic) _Bool supportAutoCapitalization; // @dynamic supportAutoCapitalization;
@property(retain, nonatomic) GKBKeyboardTypeMapEntry *symbolKeyboard; // @dynamic symbolKeyboard;

@end

