//
//  mp3_encoder.h
//  KTV
//
//  Created by songyang on 2018/11/29.
//  Copyright © 2018年 songyang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface mp3_encoder : NSObject

class Mp3Encoder {
private:
    FILE* pcmFile;
    FILE* mp3File;
    lame_t lameClient;
    
public:
    Mp3Encoder();
    ~Mp3Encoder();
    int Init(const char* pcmFilePath, const char* mp3FilePath, int sampleRate, int channels, int bitRate);
    void Encode();
    void Destory();
};



@end

NS_ASSUME_NONNULL_END
