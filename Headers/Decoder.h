//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet, UIImage;
@protocol DecoderDelegate;

@interface Decoder : NSObject
{
    NSSet *readers;
    UIImage *image;
    struct CGRect cropRect;
    UIImage *subsetImage;
    char *subsetData;
    unsigned long subsetWidth;
    unsigned long subsetHeight;
    unsigned long subsetBytesPerRow;
    id <DecoderDelegate> delegate;
}

@property(retain, nonatomic) NSSet *readers; // @synthesize readers;
@property(nonatomic) id <DecoderDelegate> delegate; // @synthesize delegate;
@property unsigned long subsetBytesPerRow; // @synthesize subsetBytesPerRow;
@property unsigned long subsetHeight; // @synthesize subsetHeight;
@property unsigned long subsetWidth; // @synthesize subsetWidth;
@property(nonatomic) char *subsetData; // @synthesize subsetData;
@property(retain, nonatomic) UIImage *subsetImage; // @synthesize subsetImage;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect;
@property(retain, nonatomic) UIImage *image; // @synthesize image;
- (id).cxx_construct;
- (void)dealloc;
- (void)setupQRCodeReader;
- (BOOL)decodeImage:(id)arg1 cropRect:(struct CGRect)arg2;
- (BOOL)decodeImage:(id)arg1;
- (BOOL)decode;
- (void)prepareSubset;
- (void)resultPointCallback:(struct CGPoint)arg1;
- (void)failedToDecodeImage:(id)arg1;
- (void)didDecodeImage:(id)arg1;
- (void)willDecodeImage;

@end

