// #include <iostream>
// #include <string>
// #include <vector>
//
// /*
// Adapter == Wrapper
// 호환되지 않는 인터페이스 때문에 함께 작동할 수 없는 클래스들을 함께 작업할 수 있게..
// 기존 클래스를 새로운 인터페이스로 감쌈..
// client -> adapter interface -> adapt!!
// */
//
// class MediaPlayer {
// public:
//     virtual void play(const std::string& audioType, const std::string& filename)=0;
// };
//
// class AdvancedMediaPlayer {
//     public:
//     virtual void playVic(const std::string& filename) = 0;
//     virtual void playMp4(const std::string& filename) = 0;
// };
//
// class VicPlayer : public AdvancedMediaPlayer {
// public:
//     void playVic(const std::string& filename) override {
//         std::cout << "VicPlayer : " << filename << std::endl;
//     }
//     void playMp4(const std::string& filename) override {}
// };
//
// class Mp4Player : public AdvancedMediaPlayer {
// public:
//     void playVic(const std::string& filename) override {}
//     void playMp4(const std::string& filename) override {
//         std::cout << "Mp4Player : " << filename << std::endl;
//     }
// };
//
// class MediaAdapter : MediaPlayer {
//     AdvancedMediaPlayer* advancedMediaPlayer;
// public:
//     MediaAdapter(const std::string& audioType) {
//         if (audioType == "vic") {
//             advancedMediaPlayer = new VicPlayer();
//         }
//         else if (audioType == "mp4") {
//             advancedMediaPlayer = new Mp4Player();
//         }
//     }
//     void play(const std::string& audioType, const std::string& filename) override {
//         if (audioType == "vic") {
//             advancedMediaPlayer->playVic(filename);
//         }
//         else if (audioType == "mp4") {
//             advancedMediaPlayer->playMp4(filename);
//         }
//     }
// };
//
// class AudioPlayer : public MediaPlayer {
//     MediaAdapter* mediaAdapter;
// public:
//     void play(const std::string& audioType, const std::string& filename) override {
//         if (audioType == "mp3") {
//             std::cout << "mp3.... : " << filename << std::endl;
//         }
//         else if (audioType == "vic" || audioType == "mp4") {
//             mediaAdapter = new MediaAdapter(audioType);
//             mediaAdapter->play(audioType, filename);
//         }
//         else {
//             std::cout << "Invalid : " << audioType << std::endl;
//         }
//     }
// };
//
// int main() {
//     AudioPlayer* audioPlayer = new AudioPlayer();
//     audioPlayer->play("mp3", "mp333");
//     audioPlayer->play("mp4", "mp444");
//     audioPlayer->play("vic", "viccc");
//     audioPlayer->play("aaa", "aaa");
// }
