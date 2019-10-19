//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@class NSArray, NSString;

@interface NSDictionary (XMLDictionary)
+ (id)dictionaryWithXMLFile:(id)arg1;
+ (id)dictionaryWithXMLString:(id)arg1;
+ (id)dictionaryWithXMLData:(id)arg1;
+ (id)dictionaryWithXMLParser:(id)arg1;
- (id)dictionaryValueForKeyPath:(id)arg1;
- (id)stringValueForKeyPath:(id)arg1;
- (id)arrayValueForKeyPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *XMLString;
@property(readonly, copy, nonatomic) NSString *innerXML;
@property(readonly, copy, nonatomic) NSString *innerText;
@property(readonly, copy, nonatomic) NSString *nodeName;
@property(readonly, copy, nonatomic) NSArray *comments;
@property(readonly, copy, nonatomic) NSDictionary *childNodes;
@property(readonly, copy, nonatomic) NSDictionary *attributes;
@end

